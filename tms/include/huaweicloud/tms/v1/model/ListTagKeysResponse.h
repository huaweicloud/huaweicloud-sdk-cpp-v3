
#ifndef HUAWEICLOUD_SDK_TMS_V1_MODEL_ListTagKeysResponse_H_
#define HUAWEICLOUD_SDK_TMS_V1_MODEL_ListTagKeysResponse_H_

#include <huaweicloud/tms/v1/TmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/tms/v1/model/PageInfoTagKeys.h>

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
class HUAWEICLOUD_TMS_V1_EXPORT  ListTagKeysResponse
    : public ModelBase, public HttpResponse
{
public:
    ListTagKeysResponse();
    virtual ~ListTagKeysResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListTagKeysResponse members

    /// <summary>
    /// 标签键列表
    /// </summary>

    std::vector<std::string>& getKeys();
    bool keysIsSet() const;
    void unsetkeys();
    void setKeys(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    PageInfoTagKeys getPageInfo() const;
    bool pageInfoIsSet() const;
    void unsetpageInfo();
    void setPageInfo(const PageInfoTagKeys& value);


protected:
    std::vector<std::string> keys_;
    bool keysIsSet_;
    PageInfoTagKeys pageInfo_;
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

#endif // HUAWEICLOUD_SDK_TMS_V1_MODEL_ListTagKeysResponse_H_
