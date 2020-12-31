
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_ListPublicipsRequest_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_ListPublicipsRequest_H_

#include <huaweicloud/eip/EipExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include <string>
#include <vector>

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
class HUAWEICLOUD_EIP_EXPORT  ListPublicipsRequest
    : public ModelBase
{
public:
    ListPublicipsRequest();
    virtual ~ListPublicipsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListPublicipsRequest members

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

    int32_t getIpVersion() const;
    bool ipVersionIsSet() const;
    void unsetipVersion();
    void setIpVersion(int32_t value);

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

    std::vector<std::string>& getPortId();
    bool portIdIsSet() const;
    void unsetportId();
    void setPortId(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<std::string>& getPublicIpAddress();
    bool publicIpAddressIsSet() const;
    void unsetpublicIpAddress();
    void setPublicIpAddress(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<std::string>& getPrivateIpAddress();
    bool privateIpAddressIsSet() const;
    void unsetprivateIpAddress();
    void setPrivateIpAddress(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<std::string>& getId();
    bool idIsSet() const;
    void unsetid();
    void setId(const std::vector<std::string>& value);


protected:
    std::string marker_;
    bool markerIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    int32_t ipVersion_;
    bool ipVersionIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::vector<std::string> portId_;
    bool portIdIsSet_;
    std::vector<std::string> publicIpAddress_;
    bool publicIpAddressIsSet_;
    std::vector<std::string> privateIpAddress_;
    bool privateIpAddressIsSet_;
    std::vector<std::string> id_;
    bool idIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListPublicipsRequest& dereference_from_shared_ptr(std::shared_ptr<ListPublicipsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_ListPublicipsRequest_H_
