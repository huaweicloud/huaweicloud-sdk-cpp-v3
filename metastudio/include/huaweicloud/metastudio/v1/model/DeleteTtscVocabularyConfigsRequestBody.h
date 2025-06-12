
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_DeleteTtscVocabularyConfigsRequestBody_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_DeleteTtscVocabularyConfigsRequestBody_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  DeleteTtscVocabularyConfigsRequestBody
    : public ModelBase
{
public:
    DeleteTtscVocabularyConfigsRequestBody();
    virtual ~DeleteTtscVocabularyConfigsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteTtscVocabularyConfigsRequestBody members

    /// <summary>
    /// 自定义读法id
    /// </summary>

    std::vector<std::string>& getId();
    bool idIsSet() const;
    void unsetid();
    void setId(const std::vector<std::string>& value);


protected:
    std::vector<std::string> id_;
    bool idIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_DeleteTtscVocabularyConfigsRequestBody_H_
