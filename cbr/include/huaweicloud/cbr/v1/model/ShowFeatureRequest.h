
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_ShowFeatureRequest_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_ShowFeatureRequest_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  ShowFeatureRequest
    : public ModelBase
{
public:
    ShowFeatureRequest();
    virtual ~ShowFeatureRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowFeatureRequest members

    /// <summary>
    /// 特性key, 当前支持： - replication.enable - replication.source_region - replication.destination_regions - replication.destination_dgw_regions - features.backup_double_az
    /// </summary>

    std::string getFeatureKey() const;
    bool featureKeyIsSet() const;
    void unsetfeatureKey();
    void setFeatureKey(const std::string& value);

    /// <summary>
    /// 每页显示条目数，正整数
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 偏移值,正整数
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);


protected:
    std::string featureKey_;
    bool featureKeyIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    int32_t offset_;
    bool offsetIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowFeatureRequest& dereference_from_shared_ptr(std::shared_ptr<ShowFeatureRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_ShowFeatureRequest_H_
