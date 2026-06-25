
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_UpdateSparseBackupPolicyResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_UpdateSparseBackupPolicyResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>

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
class HUAWEICLOUD_RDS_V3_EXPORT  UpdateSparseBackupPolicyResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateSparseBackupPolicyResponse();
    virtual ~UpdateSparseBackupPolicyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateSparseBackupPolicyResponse members

    /// <summary>
    /// 
    /// </summary>

    Object getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const Object& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    Object body_;
    bool bodyIsSet_;
    std::string xRequestId_;
    bool xRequestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_UpdateSparseBackupPolicyResponse_H_
