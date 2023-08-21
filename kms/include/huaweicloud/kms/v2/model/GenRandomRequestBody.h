
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_GenRandomRequestBody_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_GenRandomRequestBody_H_

#include <huaweicloud/kms/v2/KmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_KMS_V2_EXPORT  GenRandomRequestBody
    : public ModelBase
{
public:
    GenRandomRequestBody();
    virtual ~GenRandomRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// GenRandomRequestBody members

    /// <summary>
    /// 随机数的bit位长度。 取值为8的倍数，取值范围为8~8192。 随机数的bit位长度，取值为“512”。
    /// </summary>

    std::string getRandomDataLength() const;
    bool randomDataLengthIsSet() const;
    void unsetrandomDataLength();
    void setRandomDataLength(const std::string& value);

    /// <summary>
    /// 请求消息序列号，36字节序列号。 例如：919c82d4-8046-4722-9094-35c3c6524cff
    /// </summary>

    std::string getSequence() const;
    bool sequenceIsSet() const;
    void unsetsequence();
    void setSequence(const std::string& value);


protected:
    std::string randomDataLength_;
    bool randomDataLengthIsSet_;
    std::string sequence_;
    bool sequenceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_GenRandomRequestBody_H_
