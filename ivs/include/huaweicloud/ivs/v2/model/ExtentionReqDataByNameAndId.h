
#ifndef HUAWEICLOUD_SDK_IVS_V2_MODEL_ExtentionReqDataByNameAndId_H_
#define HUAWEICLOUD_SDK_IVS_V2_MODEL_ExtentionReqDataByNameAndId_H_


#include <huaweicloud/ivs/v2/IvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ivs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_IVS_V2_EXPORT  ExtentionReqDataByNameAndId
    : public ModelBase
{
public:
    ExtentionReqDataByNameAndId();
    virtual ~ExtentionReqDataByNameAndId();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ExtentionReqDataByNameAndId members

    /// <summary>
    /// 被验证人的姓名。
    /// </summary>

    std::string getVerificationName() const;
    bool verificationNameIsSet() const;
    void unsetverificationName();
    void setVerificationName(const std::string& value);

    /// <summary>
    /// 被验证人的身份证号码。
    /// </summary>

    std::string getVerificationId() const;
    bool verificationIdIsSet() const;
    void unsetverificationId();
    void setVerificationId(const std::string& value);


protected:
    std::string verificationName_;
    bool verificationNameIsSet_;
    std::string verificationId_;
    bool verificationIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IVS_V2_MODEL_ExtentionReqDataByNameAndId_H_
