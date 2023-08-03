
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowApiVersionResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowApiVersionResponse_H_

#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/ApiVersion.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ShowApiVersionResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowApiVersionResponse();
    virtual ~ShowApiVersionResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowApiVersionResponse members

    /// <summary>
    /// 
    /// </summary>

    ApiVersion getVersions() const;
    bool versionsIsSet() const;
    void unsetversions();
    void setVersions(const ApiVersion& value);

    /// <summary>
    /// 
    /// </summary>

    ApiVersion getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const ApiVersion& value);


protected:
    ApiVersion versions_;
    bool versionsIsSet_;
    ApiVersion version_;
    bool versionIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowApiVersionResponse_H_
