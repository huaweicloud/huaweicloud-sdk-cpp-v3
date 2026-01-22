
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_BatchDeleteDomainSetResponse_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_BatchDeleteDomainSetResponse_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/Mapstringstring.h>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  BatchDeleteDomainSetResponse
    : public ModelBase, public HttpResponse
{
public:
    BatchDeleteDomainSetResponse();
    virtual ~BatchDeleteDomainSetResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchDeleteDomainSetResponse members

    /// <summary>
    /// **参数解释**： 批量删除域名组响应信息 **取值范围**： 不涉及 
    /// </summary>

    std::map<std::string, std::vector<Mapstringstring>>& getData();
    bool dataIsSet() const;
    void unsetdata();
    void setData(const std::map<std::string, std::vector<Mapstringstring>>& value);


protected:
    std::map<std::string, std::vector<Mapstringstring>> data_;
    bool dataIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_BatchDeleteDomainSetResponse_H_
