
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_KnowledgeTypeEnum_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_KnowledgeTypeEnum_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  KnowledgeTypeEnum
: public ModelBase
{
public:
    KnowledgeTypeEnum();
    virtual ~KnowledgeTypeEnum();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    enum class eKnowledgeTypeEnum 
    {
        KnowledgeTypeEnum_QUESTION_ANSWER,
        KnowledgeTypeEnum_DOCUMENT,
    };

    eKnowledgeTypeEnum getValue() const;
    void setValue(eKnowledgeTypeEnum const value);

protected:
    eKnowledgeTypeEnum value_;

};

}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_KnowledgeTypeEnum_H_
