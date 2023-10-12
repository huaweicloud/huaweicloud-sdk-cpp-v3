
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_VersionItem_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_VersionItem_H_


#include <huaweicloud/smn/v2/SmnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/smn/v2/model/LinksItem.h>
#include <string>
#include <vector>

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
class HUAWEICLOUD_SMN_V2_EXPORT  VersionItem
    : public ModelBase
{
public:
    VersionItem();
    virtual ~VersionItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VersionItem members

    /// <summary>
    /// 版本ID（版本号），如v2。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 若该版本API支持微版本，则返回支持的最小微版本号；若不支持微版本，则返回空。
    /// </summary>

    std::string getMinVersion() const;
    bool minVersionIsSet() const;
    void unsetminVersion();
    void setMinVersion(const std::string& value);

    /// <summary>
    /// 版本状态，为如下3种：  CURRENT：表示该版本为主推版本。  SUPPORTED：表示为老版本，但是现在还继续支持。  DEPRECATED：表示为废弃版本，存在后续删除的可能。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 版本发布时间，要求用UTC时间格式表示。如v2发布的时间2014-06-28T12:20:21Z。
    /// </summary>

    std::string getUpdated() const;
    bool updatedIsSet() const;
    void unsetupdated();
    void setUpdated(const std::string& value);

    /// <summary>
    /// 若该版本API支持微版本，则返回支持的最大微版本号；若不支持微版本，则返回空。
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// API的URL地址。
    /// </summary>

    std::vector<LinksItem>& getLinks();
    bool linksIsSet() const;
    void unsetlinks();
    void setLinks(const std::vector<LinksItem>& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string minVersion_;
    bool minVersionIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string updated_;
    bool updatedIsSet_;
    std::string version_;
    bool versionIsSet_;
    std::vector<LinksItem> links_;
    bool linksIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_VersionItem_H_
