
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_NameDto_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_NameDto_H_


#include <huaweicloud/identitycenterstore/v1/IdentityCenterStoreExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// The full name of the user.
/// </summary>
class HUAWEICLOUD_IDENTITYCENTERSTORE_V1_EXPORT  NameDto
    : public ModelBase
{
public:
    NameDto();
    virtual ~NameDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NameDto members

    /// <summary>
    /// 用户的姓氏
    /// </summary>

    std::string getFamilyName() const;
    bool familyNameIsSet() const;
    void unsetfamilyName();
    void setFamilyName(const std::string& value);

    /// <summary>
    /// 包含要显示的名称的格式化版本的字符串display.
    /// </summary>

    std::string getFormatted() const;
    bool formattedIsSet() const;
    void unsetformatted();
    void setFormatted(const std::string& value);

    /// <summary>
    /// 用户的名字
    /// </summary>

    std::string getGivenName() const;
    bool givenNameIsSet() const;
    void unsetgivenName();
    void setGivenName(const std::string& value);

    /// <summary>
    /// 用户的尊称前缀
    /// </summary>

    std::string getHonorificPrefix() const;
    bool honorificPrefixIsSet() const;
    void unsethonorificPrefix();
    void setHonorificPrefix(const std::string& value);

    /// <summary>
    /// 用户的尊称后缀
    /// </summary>

    std::string getHonorificSuffix() const;
    bool honorificSuffixIsSet() const;
    void unsethonorificSuffix();
    void setHonorificSuffix(const std::string& value);

    /// <summary>
    /// 用户的中间名
    /// </summary>

    std::string getMiddleName() const;
    bool middleNameIsSet() const;
    void unsetmiddleName();
    void setMiddleName(const std::string& value);


protected:
    std::string familyName_;
    bool familyNameIsSet_;
    std::string formatted_;
    bool formattedIsSet_;
    std::string givenName_;
    bool givenNameIsSet_;
    std::string honorificPrefix_;
    bool honorificPrefixIsSet_;
    std::string honorificSuffix_;
    bool honorificSuffixIsSet_;
    std::string middleName_;
    bool middleNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_NameDto_H_
