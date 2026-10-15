
#ifndef HUAWEICLOUD_SDK_RGC_V1_MODEL_LandingZoneVersionDetail_H_
#define HUAWEICLOUD_SDK_RGC_V1_MODEL_LandingZoneVersionDetail_H_


#include <huaweicloud/rgc/v1/RgcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Landing Zone版本详细信息。
/// </summary>
class HUAWEICLOUD_RGC_V1_EXPORT  LandingZoneVersionDetail
    : public ModelBase
{
public:
    LandingZoneVersionDetail();
    virtual ~LandingZoneVersionDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// LandingZoneVersionDetail members

    /// <summary>
    /// Landing Zone版本。
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// Landing Zone版本发布时间。
    /// </summary>

    std::string getReleaseDate() const;
    bool releaseDateIsSet() const;
    void unsetreleaseDate();
    void setReleaseDate(const std::string& value);

    /// <summary>
    /// Landing Zone版本发布说明。
    /// </summary>

    std::string getReleaseNotes() const;
    bool releaseNotesIsSet() const;
    void unsetreleaseNotes();
    void setReleaseNotes(const std::string& value);


protected:
    std::string version_;
    bool versionIsSet_;
    std::string releaseDate_;
    bool releaseDateIsSet_;
    std::string releaseNotes_;
    bool releaseNotesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RGC_V1_MODEL_LandingZoneVersionDetail_H_
