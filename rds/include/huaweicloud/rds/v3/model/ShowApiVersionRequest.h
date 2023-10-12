
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowApiVersionRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowApiVersionRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ShowApiVersionRequest
    : public ModelBase
{
public:
    ShowApiVersionRequest();
    virtual ~ShowApiVersionRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowApiVersionRequest members

    /// <summary>
    /// API版本
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);


protected:
    std::string version_;
    bool versionIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowApiVersionRequest& dereference_from_shared_ptr(std::shared_ptr<ShowApiVersionRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowApiVersionRequest_H_
