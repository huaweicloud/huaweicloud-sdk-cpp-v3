
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_ListBandwidthsRequest_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_ListBandwidthsRequest_H_

#include <huaweicloud/eip/v2/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_EIP_V2_EXPORT  ListBandwidthsRequest
    : public ModelBase
{
public:
    ListBandwidthsRequest();
    virtual ~ListBandwidthsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListBandwidthsRequest members

    /// <summary>
    /// 
    /// </summary>

    std::string getMarker() const;
    bool markerIsSet() const;
    void unsetmarker();
    void setMarker(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getShareType() const;
    bool shareTypeIsSet() const;
    void unsetshareType();
    void setShareType(const std::string& value);


protected:
    std::string marker_;
    bool markerIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::string shareType_;
    bool shareTypeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListBandwidthsRequest& dereference_from_shared_ptr(std::shared_ptr<ListBandwidthsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_ListBandwidthsRequest_H_
