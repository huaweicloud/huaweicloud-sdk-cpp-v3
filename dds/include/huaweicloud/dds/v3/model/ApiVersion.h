
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_ApiVersion_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_ApiVersion_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dds/v3/model/Links.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// API版本详细信息列表。
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  ApiVersion
    : public ModelBase
{
public:
    ApiVersion();
    virtual ~ApiVersion();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ApiVersion members

    /// <summary>
    /// API版本号。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 对应API的链接信息,v3版本该字段为[]。
    /// </summary>

    std::vector<Links>& getLinks();
    bool linksIsSet() const;
    void unsetlinks();
    void setLinks(const std::vector<Links>& value);

    /// <summary>
    /// 版本状态。 取值为“CURRENT”，表示该版本目前已对外公布。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// API版本的子版本信息。
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// API版本的最小版本号。
    /// </summary>

    std::string getMinVersion() const;
    bool minVersionIsSet() const;
    void unsetminVersion();
    void setMinVersion(const std::string& value);

    /// <summary>
    /// 版本更新时间。 格式为“yyyy-mm-dd Thh:mm:ssZ”。 其中，T指某个时间的开始，Z指UTC时间。
    /// </summary>

    std::string getUpdated() const;
    bool updatedIsSet() const;
    void unsetupdated();
    void setUpdated(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::vector<Links> links_;
    bool linksIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string version_;
    bool versionIsSet_;
    std::string minVersion_;
    bool minVersionIsSet_;
    std::string updated_;
    bool updatedIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_ApiVersion_H_
