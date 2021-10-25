
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_ShowApiVersionParams_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_ShowApiVersionParams_H_

#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/sdrs/v1/model/ShowApiVersionLinksParams.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 查询api版本结构
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  ShowApiVersionParams
    : public ModelBase
{
public:
    ShowApiVersionParams();
    virtual ~ShowApiVersionParams();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowApiVersionParams members

    /// <summary>
    /// 版本ID（版本号），如v1。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 版本号查询链接
    /// </summary>

    std::vector<ShowApiVersionLinksParams>& getLinks();
    bool linksIsSet() const;
    void unsetlinks();
    void setLinks(const std::vector<ShowApiVersionLinksParams>& value);

    /// <summary>
    /// 若该版本API支持微版本，则返回支持的最大微版本号，如果不支持微版本，则返回空。
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// 版本状态，为如下3种： CURRENT：表示该版本为主推版本 SUPPORTED：表示为老版本，但是现在还继续支持 DEPRECATED：表示为废弃版本，存在后续删除的可能
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 版本发布时间，采用UTC时间表示。如v1发布的时间2018-05-30T15:00:00Z。
    /// </summary>

    std::string getUpdated() const;
    bool updatedIsSet() const;
    void unsetupdated();
    void setUpdated(const std::string& value);

    /// <summary>
    /// 若该版本API 支持微版本，则返回支持的最小微版本号，如果不支持微版本，则返回空。
    /// </summary>

    std::string getMinVersion() const;
    bool minVersionIsSet() const;
    void unsetminVersion();
    void setMinVersion(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::vector<ShowApiVersionLinksParams> links_;
    bool linksIsSet_;
    std::string version_;
    bool versionIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string updated_;
    bool updatedIsSet_;
    std::string minVersion_;
    bool minVersionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_ShowApiVersionParams_H_
