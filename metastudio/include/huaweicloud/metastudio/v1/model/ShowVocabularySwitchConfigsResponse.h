
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowVocabularySwitchConfigsResponse_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowVocabularySwitchConfigsResponse_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/metastudio/v1/model/SaveTtscTenantConfigsRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ShowVocabularySwitchConfigsResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowVocabularySwitchConfigsResponse();
    virtual ~ShowVocabularySwitchConfigsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowVocabularySwitchConfigsResponse members

    /// <summary>
    /// 总记录数。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// 租户级的开关列表。
    /// </summary>

    std::vector<SaveTtscTenantConfigsRequestBody>& getData();
    bool dataIsSet() const;
    void unsetdata();
    void setData(const std::vector<SaveTtscTenantConfigsRequestBody>& value);


protected:
    int32_t count_;
    bool countIsSet_;
    std::vector<SaveTtscTenantConfigsRequestBody> data_;
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

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowVocabularySwitchConfigsResponse_H_
