
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_BatchResult_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_BatchResult_H_


#include <huaweicloud/smn/v2/SmnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_SMN_V2_EXPORT  BatchResult
    : public ModelBase
{
public:
    BatchResult();
    virtual ~BatchResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchResult members

    /// <summary>
    /// 执行结果code
    /// </summary>

    std::string getCode() const;
    bool codeIsSet() const;
    void unsetcode();
    void setCode(const std::string& value);

    /// <summary>
    /// 执行结果message
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);

    /// <summary>
    /// 订阅者urn
    /// </summary>

    std::string getSubscriptionUrn() const;
    bool subscriptionUrnIsSet() const;
    void unsetsubscriptionUrn();
    void setSubscriptionUrn(const std::string& value);


protected:
    std::string code_;
    bool codeIsSet_;
    std::string message_;
    bool messageIsSet_;
    std::string subscriptionUrn_;
    bool subscriptionUrnIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_BatchResult_H_
