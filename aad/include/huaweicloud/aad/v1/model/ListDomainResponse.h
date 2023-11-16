
#ifndef HUAWEICLOUD_SDK_AAD_V1_MODEL_ListDomainResponse_H_
#define HUAWEICLOUD_SDK_AAD_V1_MODEL_ListDomainResponse_H_


#include <huaweicloud/aad/v1/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/aad/v1/model/DomainInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_AAD_V1_EXPORT  ListDomainResponse
    : public ModelBase, public HttpResponse
{
public:
    ListDomainResponse();
    virtual ~ListDomainResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListDomainResponse members

    /// <summary>
    /// 域名总数
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// 域名列表
    /// </summary>

    std::vector<DomainInfo>& getItems();
    bool itemsIsSet() const;
    void unsetitems();
    void setItems(const std::vector<DomainInfo>& value);


protected:
    int32_t count_;
    bool countIsSet_;
    std::vector<DomainInfo> items_;
    bool itemsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V1_MODEL_ListDomainResponse_H_
