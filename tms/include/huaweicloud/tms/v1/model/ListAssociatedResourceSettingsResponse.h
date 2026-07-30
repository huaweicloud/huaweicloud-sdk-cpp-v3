
#ifndef HUAWEICLOUD_SDK_TMS_V1_MODEL_ListAssociatedResourceSettingsResponse_H_
#define HUAWEICLOUD_SDK_TMS_V1_MODEL_ListAssociatedResourceSettingsResponse_H_


#include <huaweicloud/tms/v1/TmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/tms/v1/model/AssociatedResourceSetting.h>
#include <vector>
#include <huaweicloud/tms/v1/model/PageInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_TMS_V1_EXPORT  ListAssociatedResourceSettingsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListAssociatedResourceSettingsResponse();
    virtual ~ListAssociatedResourceSettingsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAssociatedResourceSettingsResponse members

    /// <summary>
    /// 规则的配置信息
    /// </summary>

    std::vector<AssociatedResourceSetting>& getSettings();
    bool settingsIsSet() const;
    void unsetsettings();
    void setSettings(const std::vector<AssociatedResourceSetting>& value);

    /// <summary>
    /// 记录总数
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    PageInfo getPageInfo() const;
    bool pageInfoIsSet() const;
    void unsetpageInfo();
    void setPageInfo(const PageInfo& value);


protected:
    std::vector<AssociatedResourceSetting> settings_;
    bool settingsIsSet_;
    int32_t totalCount_;
    bool totalCountIsSet_;
    PageInfo pageInfo_;
    bool pageInfoIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_TMS_V1_MODEL_ListAssociatedResourceSettingsResponse_H_
