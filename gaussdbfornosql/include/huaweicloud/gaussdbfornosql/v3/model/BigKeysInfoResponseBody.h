
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_BigKeysInfoResponseBody_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_BigKeysInfoResponseBody_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  BigKeysInfoResponseBody
    : public ModelBase
{
public:
    BigKeysInfoResponseBody();
    virtual ~BigKeysInfoResponseBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BigKeysInfoResponseBody members

    /// <summary>
    /// 大Key所在的DB。
    /// </summary>

    int32_t getDbId() const;
    bool dbIdIsSet() const;
    void unsetdbId();
    void setDbId(int32_t value);

    /// <summary>
    /// 大Key类型。
    /// </summary>

    std::string getKeyType() const;
    bool keyTypeIsSet() const;
    void unsetkeyType();
    void setKeyType(const std::string& value);

    /// <summary>
    /// 大Key名。
    /// </summary>

    std::string getKeyName() const;
    bool keyNameIsSet() const;
    void unsetkeyName();
    void setKeyName(const std::string& value);

    /// <summary>
    /// 大Key的长度。
    /// </summary>

    int32_t getKeySize() const;
    bool keySizeIsSet() const;
    void unsetkeySize();
    void setKeySize(int32_t value);


protected:
    int32_t dbId_;
    bool dbIdIsSet_;
    std::string keyType_;
    bool keyTypeIsSet_;
    std::string keyName_;
    bool keyNameIsSet_;
    int32_t keySize_;
    bool keySizeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_BigKeysInfoResponseBody_H_
