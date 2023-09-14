
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_ListApplicationEndpointsRequest_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_ListApplicationEndpointsRequest_H_

#include <huaweicloud/smn/v2/SmnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_SMN_V2_EXPORT  ListApplicationEndpointsRequest
    : public ModelBase
{
public:
    ListApplicationEndpointsRequest();
    virtual ~ListApplicationEndpointsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListApplicationEndpointsRequest members

    /// <summary>
    /// Application的唯一资源标识，可通过[查询Application](smn_api_57004.xml)获取该标识。
    /// </summary>

    std::string getApplicationUrn() const;
    bool applicationUrnIsSet() const;
    void unsetapplicationUrn();
    void setApplicationUrn(const std::string& value);

    /// <summary>
    /// 偏移量。  偏移量为一个大于0小于资源总个数的整数，表示查询该偏移量后面的所有的资源，默认值为0。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 查询的数量限制。  取值范围：1~100，取值一般为10，20，50。功能说明：每页返回的资源个数。默认值为100。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 设备是否可用，值为true或false字符串。
    /// </summary>

    std::string getEnabled() const;
    bool enabledIsSet() const;
    void unsetenabled();
    void setEnabled(const std::string& value);

    /// <summary>
    /// 设备token，最大长度512个字节。
    /// </summary>

    std::string getToken() const;
    bool tokenIsSet() const;
    void unsettoken();
    void setToken(const std::string& value);

    /// <summary>
    /// 用户数据，最大长度2048个字节。
    /// </summary>

    std::string getUserData() const;
    bool userDataIsSet() const;
    void unsetuserData();
    void setUserData(const std::string& value);


protected:
    std::string applicationUrn_;
    bool applicationUrnIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string enabled_;
    bool enabledIsSet_;
    std::string token_;
    bool tokenIsSet_;
    std::string userData_;
    bool userDataIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListApplicationEndpointsRequest& dereference_from_shared_ptr(std::shared_ptr<ListApplicationEndpointsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_ListApplicationEndpointsRequest_H_
