
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_Versions_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_Versions_H_


#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/evs/v2/model/Link.h>
#include <huaweicloud/evs/v2/model/MediaTypes.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 版本信息结构体
/// </summary>
class HUAWEICLOUD_EVS_V2_EXPORT  Versions
    : public ModelBase
{
public:
    Versions();
    virtual ~Versions();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Versions members

    /// <summary>
    /// 接口版本的ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 接口版本信息的URI描述信息
    /// </summary>

    std::vector<Link>& getLinks();
    bool linksIsSet() const;
    void unsetlinks();
    void setLinks(const std::vector<Link>& value);

    /// <summary>
    /// 接口版本的请求消息类型信息
    /// </summary>

    std::vector<MediaTypes>& getMediaTypes();
    bool mediaTypesIsSet() const;
    void unsetmediaTypes();
    void setMediaTypes(const std::vector<MediaTypes>& value);

    /// <summary>
    /// 接口版本的最小版本号
    /// </summary>

    std::string getMinVersion() const;
    bool minVersionIsSet() const;
    void unsetminVersion();
    void setMinVersion(const std::string& value);

    /// <summary>
    /// 接口版本的状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 接口版本更新时间
    /// </summary>

    std::string getUpdated() const;
    bool updatedIsSet() const;
    void unsetupdated();
    void setUpdated(const std::string& value);

    /// <summary>
    /// 接口版本的版本号信息
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::vector<Link> links_;
    bool linksIsSet_;
    std::vector<MediaTypes> mediaTypes_;
    bool mediaTypesIsSet_;
    std::string minVersion_;
    bool minVersionIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string updated_;
    bool updatedIsSet_;
    std::string version_;
    bool versionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_Versions_H_
