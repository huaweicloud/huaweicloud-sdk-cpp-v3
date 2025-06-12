
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SaveTtscVocabularyConfigsResponse_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SaveTtscVocabularyConfigsResponse_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  SaveTtscVocabularyConfigsResponse
    : public ModelBase, public HttpResponse
{
public:
    SaveTtscVocabularyConfigsResponse();
    virtual ~SaveTtscVocabularyConfigsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SaveTtscVocabularyConfigsResponse members

    /// <summary>
    /// 配置项id。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SaveTtscVocabularyConfigsResponse_H_
