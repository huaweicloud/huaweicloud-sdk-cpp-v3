
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ResourcePoolVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ResourcePoolVo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 实际的数据类型：单个对象，集合 或 NULL
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ResourcePoolVo
    : public ModelBase
{
public:
    ResourcePoolVo();
    virtual ~ResourcePoolVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResourcePoolVo members

    /// <summary>
    /// 资源池ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 资源池名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 资源池类型（VM/DOCKER）
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 是否选中
    /// </summary>

    std::string getSelected() const;
    bool selectedIsSet() const;
    void unsetselected();
    void setSelected(const std::string& value);

    /// <summary>
    /// 资源池状态
    /// </summary>

    std::string getActiveState() const;
    bool activeStateIsSet() const;
    void unsetactiveState();
    void setActiveState(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string selected_;
    bool selectedIsSet_;
    std::string activeState_;
    bool activeStateIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ResourcePoolVo_H_
