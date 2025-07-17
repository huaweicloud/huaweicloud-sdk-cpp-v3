
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_MobvoiVocabulary_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_MobvoiVocabulary_H_


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
/// mobvoi类型热词表
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  MobvoiVocabulary
    : public ModelBase
{
public:
    MobvoiVocabulary();
    virtual ~MobvoiVocabulary();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MobvoiVocabulary members

    /// <summary>
    /// 词表文本
    /// </summary>

    std::string getContent() const;
    bool contentIsSet() const;
    void unsetcontent();
    void setContent(const std::string& value);


protected:
    std::string content_;
    bool contentIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_MobvoiVocabulary_H_
