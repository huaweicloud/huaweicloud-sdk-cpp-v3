
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ScrumStatusFlowDirectToVo_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ScrumStatusFlowDirectToVo_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ScrumStatusFlowDirectToVo
    : public ModelBase
{
public:
    ScrumStatusFlowDirectToVo();
    virtual ~ScrumStatusFlowDirectToVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ScrumStatusFlowDirectToVo members

    /// <summary>
    /// 流转数据的uuid
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 状态id
    /// </summary>

    int32_t getStatusId() const;
    bool statusIdIsSet() const;
    void unsetstatusId();
    void setStatusId(int32_t value);

    /// <summary>
    /// 状态名
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 是否开启流转
    /// </summary>

    bool isEnabled() const;
    bool enabledIsSet() const;
    void unsetenabled();
    void setEnabled(bool value);


protected:
    std::string id_;
    bool idIsSet_;
    int32_t statusId_;
    bool statusIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    bool enabled_;
    bool enabledIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ScrumStatusFlowDirectToVo_H_
