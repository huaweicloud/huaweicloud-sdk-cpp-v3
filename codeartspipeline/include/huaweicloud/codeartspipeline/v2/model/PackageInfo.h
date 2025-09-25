
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PackageInfo_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PackageInfo_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 流水线产物
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  PackageInfo
    : public ModelBase
{
public:
    PackageInfo();
    virtual ~PackageInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PackageInfo members

    /// <summary>
    /// **参数解释**： 产物名。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**： 产物类型。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getPackageType() const;
    bool packageTypeIsSet() const;
    void unsetpackageType();
    void setPackageType(const std::string& value);

    /// <summary>
    /// **参数解释**： 产物版本号。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// **参数解释**： 产物下载地址。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getDownloadUrl() const;
    bool downloadUrlIsSet() const;
    void unsetdownloadUrl();
    void setDownloadUrl(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string packageType_;
    bool packageTypeIsSet_;
    std::string version_;
    bool versionIsSet_;
    std::string downloadUrl_;
    bool downloadUrlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PackageInfo_H_
