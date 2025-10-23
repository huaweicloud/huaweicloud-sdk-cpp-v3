
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_CheckWeakPasswordRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_CheckWeakPasswordRequest_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  CheckWeakPasswordRequest
    : public ModelBase
{
public:
    CheckWeakPasswordRequest();
    virtual ~CheckWeakPasswordRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CheckWeakPasswordRequest members

    /// <summary>
    /// 需要检验的密码。
    /// </summary>

    std::string getTarget() const;
    bool targetIsSet() const;
    void unsettarget();
    void setTarget(const std::string& value);

    /// <summary>
    /// 引擎名称，取值范围：sqlserver, mysql, postgresql，区分大小写。
    /// </summary>

    std::string getEngine() const;
    bool engineIsSet() const;
    void unsetengine();
    void setEngine(const std::string& value);


protected:
    std::string target_;
    bool targetIsSet_;
    std::string engine_;
    bool engineIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_CheckWeakPasswordRequest_H_
