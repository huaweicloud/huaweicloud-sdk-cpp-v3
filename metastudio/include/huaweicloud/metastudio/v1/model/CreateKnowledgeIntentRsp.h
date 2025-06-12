
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateKnowledgeIntentRsp_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateKnowledgeIntentRsp_H_


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
/// 创建知识库意图响应。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  CreateKnowledgeIntentRsp
    : public ModelBase
{
public:
    CreateKnowledgeIntentRsp();
    virtual ~CreateKnowledgeIntentRsp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateKnowledgeIntentRsp members

    /// <summary>
    /// 意图ID。
    /// </summary>

    std::string getIntentId() const;
    bool intentIdIsSet() const;
    void unsetintentId();
    void setIntentId(const std::string& value);

    /// <summary>
    /// 意图标识。
    /// </summary>

    std::string getIdentify() const;
    bool identifyIsSet() const;
    void unsetidentify();
    void setIdentify(const std::string& value);


protected:
    std::string intentId_;
    bool intentIdIsSet_;
    std::string identify_;
    bool identifyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateKnowledgeIntentRsp_H_
