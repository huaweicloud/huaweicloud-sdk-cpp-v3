
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_DecryptDatakeyResponse_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_DecryptDatakeyResponse_H_


#include <huaweicloud/kms/v2/KmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
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
/// Response Object
/// </summary>
class HUAWEICLOUD_KMS_V2_EXPORT  DecryptDatakeyResponse
    : public ModelBase, public HttpResponse
{
public:
    DecryptDatakeyResponse();
    virtual ~DecryptDatakeyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DecryptDatakeyResponse members

    /// <summary>
    /// DEK明文的16进制字符串。
    /// </summary>

    std::string getDataKey() const;
    bool dataKeyIsSet() const;
    void unsetdataKey();
    void setDataKey(const std::string& value);

    /// <summary>
    /// DEK明文字节长度。
    /// </summary>

    std::string getDatakeyLength() const;
    bool datakeyLengthIsSet() const;
    void unsetdatakeyLength();
    void setDatakeyLength(const std::string& value);

    /// <summary>
    /// DEK明文的SHA256值对应的16进制字符串。
    /// </summary>

    std::string getDatakeyDgst() const;
    bool datakeyDgstIsSet() const;
    void unsetdatakeyDgst();
    void setDatakeyDgst(const std::string& value);


protected:
    std::string dataKey_;
    bool dataKeyIsSet_;
    std::string datakeyLength_;
    bool datakeyLengthIsSet_;
    std::string datakeyDgst_;
    bool datakeyDgstIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_DecryptDatakeyResponse_H_
