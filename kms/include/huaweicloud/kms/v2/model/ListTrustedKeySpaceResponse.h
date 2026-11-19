
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_ListTrustedKeySpaceResponse_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_ListTrustedKeySpaceResponse_H_


#include <huaweicloud/kms/v2/KmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/kms/v2/model/ListAccessPointResponseBody_page_info.h>
#include <huaweicloud/kms/v2/model/ListTrustedKeySpaceResponseBody_keyspaces.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_KMS_V2_EXPORT  ListTrustedKeySpaceResponse
    : public ModelBase, public HttpResponse
{
public:
    ListTrustedKeySpaceResponse();
    virtual ~ListTrustedKeySpaceResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListTrustedKeySpaceResponse members

    /// <summary>
    /// 
    /// </summary>

    ListAccessPointResponseBody_page_info getPageInfo() const;
    bool pageInfoIsSet() const;
    void unsetpageInfo();
    void setPageInfo(const ListAccessPointResponseBody_page_info& value);

    /// <summary>
    /// **参数解释：** 密钥空间列表 **取值范围：** 不涉及
    /// </summary>

    std::vector<ListTrustedKeySpaceResponseBody_keyspaces>& getKeyspaces();
    bool keyspacesIsSet() const;
    void unsetkeyspaces();
    void setKeyspaces(const std::vector<ListTrustedKeySpaceResponseBody_keyspaces>& value);


protected:
    ListAccessPointResponseBody_page_info pageInfo_;
    bool pageInfoIsSet_;
    std::vector<ListTrustedKeySpaceResponseBody_keyspaces> keyspaces_;
    bool keyspacesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_ListTrustedKeySpaceResponse_H_
