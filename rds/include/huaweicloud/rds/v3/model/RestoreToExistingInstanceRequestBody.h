
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_RestoreToExistingInstanceRequestBody_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_RestoreToExistingInstanceRequestBody_H_

#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/RestoreToExistingInstanceRequestBody_source.h>
#include <huaweicloud/rds/v3/model/RestoreToExistingInstanceRequestBody_target.h>

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
class HUAWEICLOUD_RDS_V3_EXPORT  RestoreToExistingInstanceRequestBody
    : public ModelBase
{
public:
    RestoreToExistingInstanceRequestBody();
    virtual ~RestoreToExistingInstanceRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// RestoreToExistingInstanceRequestBody members

    /// <summary>
    /// 
    /// </summary>

    RestoreToExistingInstanceRequestBody_source getSource() const;
    bool sourceIsSet() const;
    void unsetsource();
    void setSource(const RestoreToExistingInstanceRequestBody_source& value);

    /// <summary>
    /// 
    /// </summary>

    RestoreToExistingInstanceRequestBody_target getTarget() const;
    bool targetIsSet() const;
    void unsettarget();
    void setTarget(const RestoreToExistingInstanceRequestBody_target& value);


protected:
    RestoreToExistingInstanceRequestBody_source source_;
    bool sourceIsSet_;
    RestoreToExistingInstanceRequestBody_target target_;
    bool targetIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_RestoreToExistingInstanceRequestBody_H_
