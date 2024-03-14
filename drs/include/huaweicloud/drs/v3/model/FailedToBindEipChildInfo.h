
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_FailedToBindEipChildInfo_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_FailedToBindEipChildInfo_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 绑定EIP失败的子任务信息
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  FailedToBindEipChildInfo
    : public ModelBase
{
public:
    FailedToBindEipChildInfo();
    virtual ~FailedToBindEipChildInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FailedToBindEipChildInfo members

    /// <summary>
    /// 子任务ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 子任务名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_FailedToBindEipChildInfo_H_
