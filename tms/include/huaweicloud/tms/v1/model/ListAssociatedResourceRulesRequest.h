
#ifndef HUAWEICLOUD_SDK_TMS_V1_MODEL_ListAssociatedResourceRulesRequest_H_
#define HUAWEICLOUD_SDK_TMS_V1_MODEL_ListAssociatedResourceRulesRequest_H_


#include <huaweicloud/tms/v1/TmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_TMS_V1_EXPORT  ListAssociatedResourceRulesRequest
    : public ModelBase
{
public:
    ListAssociatedResourceRulesRequest();
    virtual ~ListAssociatedResourceRulesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAssociatedResourceRulesRequest members

    /// <summary>
    /// 查询记录数。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 分页位置标识（索引）。从marker指定索引的下一条数据开始查询。
    /// </summary>

    std::string getMarker() const;
    bool markerIsSet() const;
    void unsetmarker();
    void setMarker(const std::string& value);

    /// <summary>
    /// 规则的配置名称
    /// </summary>

    std::string getSettingName() const;
    bool settingNameIsSet() const;
    void unsetsettingName();
    void setSettingName(const std::string& value);

    /// <summary>
    /// 规则的区域ID
    /// </summary>

    std::string getRegionId() const;
    bool regionIdIsSet() const;
    void unsetregionId();
    void setRegionId(const std::string& value);


protected:
    int32_t limit_;
    bool limitIsSet_;
    std::string marker_;
    bool markerIsSet_;
    std::string settingName_;
    bool settingNameIsSet_;
    std::string regionId_;
    bool regionIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListAssociatedResourceRulesRequest& dereference_from_shared_ptr(std::shared_ptr<ListAssociatedResourceRulesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_TMS_V1_MODEL_ListAssociatedResourceRulesRequest_H_
