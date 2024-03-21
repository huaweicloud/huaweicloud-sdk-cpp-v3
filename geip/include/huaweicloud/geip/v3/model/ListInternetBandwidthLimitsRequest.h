
#ifndef HUAWEICLOUD_SDK_GEIP_V3_MODEL_ListInternetBandwidthLimitsRequest_H_
#define HUAWEICLOUD_SDK_GEIP_V3_MODEL_ListInternetBandwidthLimitsRequest_H_


#include <huaweicloud/geip/v3/GeipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_GEIP_V3_EXPORT  ListInternetBandwidthLimitsRequest
    : public ModelBase
{
public:
    ListInternetBandwidthLimitsRequest();
    virtual ~ListInternetBandwidthLimitsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListInternetBandwidthLimitsRequest members

    /// <summary>
    /// 
    /// </summary>

    std::vector<std::string>& getFields();
    bool fieldsIsSet() const;
    void unsetfields();
    void setFields(const std::vector<std::string>& value);

    /// <summary>
    /// 按照sort_key指定的字段排序
    /// </summary>

    std::vector<std::string>& getSortKey();
    bool sortKeyIsSet() const;
    void unsetsortKey();
    void setSortKey(const std::vector<std::string>& value);

    /// <summary>
    /// 排序的方向，倒序或者正序
    /// </summary>

    std::vector<std::string>& getSortDir();
    bool sortDirIsSet() const;
    void unsetsortDir();
    void setSortDir(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<std::string>& getChargeMode();
    bool chargeModeIsSet() const;
    void unsetchargeMode();
    void setChargeMode(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);


protected:
    std::vector<std::string> fields_;
    bool fieldsIsSet_;
    std::vector<std::string> sortKey_;
    bool sortKeyIsSet_;
    std::vector<std::string> sortDir_;
    bool sortDirIsSet_;
    std::vector<std::string> chargeMode_;
    bool chargeModeIsSet_;
    std::string type_;
    bool typeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListInternetBandwidthLimitsRequest& dereference_from_shared_ptr(std::shared_ptr<ListInternetBandwidthLimitsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GEIP_V3_MODEL_ListInternetBandwidthLimitsRequest_H_
