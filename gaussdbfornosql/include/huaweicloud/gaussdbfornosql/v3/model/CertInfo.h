
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_CertInfo_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_CertInfo_H_


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
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  CertInfo
    : public ModelBase
{
public:
    CertInfo();
    virtual ~CertInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CertInfo members

    /// <summary>
    /// **参数解释：** 证书种类。 **取值范围：** - international：国际证书。
    /// </summary>

    std::string getCategory() const;
    bool categoryIsSet() const;
    void unsetcategory();
    void setCategory(const std::string& value);

    /// <summary>
    /// **参数解释：** 证书下载链接。 **取值范围：** 不涉及。
    /// </summary>

    std::string getDownloadLink() const;
    bool downloadLinkIsSet() const;
    void unsetdownloadLink();
    void setDownloadLink(const std::string& value);


protected:
    std::string category_;
    bool categoryIsSet_;
    std::string downloadLink_;
    bool downloadLinkIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_CertInfo_H_
