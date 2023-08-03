
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_RestoreExistingInstanceRequestBody_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_RestoreExistingInstanceRequestBody_H_

#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/TargetInstanceRequest.h>
#include <huaweicloud/rds/v3/model/RestoreExistingInstanceRequestBody_source.h>

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
class HUAWEICLOUD_RDS_V3_EXPORT  RestoreExistingInstanceRequestBody
    : public ModelBase
{
public:
    RestoreExistingInstanceRequestBody();
    virtual ~RestoreExistingInstanceRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// RestoreExistingInstanceRequestBody members

    /// <summary>
    /// 
    /// </summary>

    RestoreExistingInstanceRequestBody_source getSource() const;
    bool sourceIsSet() const;
    void unsetsource();
    void setSource(const RestoreExistingInstanceRequestBody_source& value);

    /// <summary>
    /// 
    /// </summary>

    TargetInstanceRequest getTarget() const;
    bool targetIsSet() const;
    void unsettarget();
    void setTarget(const TargetInstanceRequest& value);


protected:
    RestoreExistingInstanceRequestBody_source source_;
    bool sourceIsSet_;
    TargetInstanceRequest target_;
    bool targetIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_RestoreExistingInstanceRequestBody_H_
