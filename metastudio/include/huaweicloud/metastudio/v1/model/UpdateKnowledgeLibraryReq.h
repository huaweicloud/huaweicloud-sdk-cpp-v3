
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UpdateKnowledgeLibraryReq_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UpdateKnowledgeLibraryReq_H_


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
/// 修改知识库请求。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  UpdateKnowledgeLibraryReq
    : public ModelBase
{
public:
    UpdateKnowledgeLibraryReq();
    virtual ~UpdateKnowledgeLibraryReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateKnowledgeLibraryReq members

    /// <summary>
    /// 知识库名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 知识库召回数
    /// </summary>

    int32_t getTopk() const;
    bool topkIsSet() const;
    void unsettopk();
    void setTopk(int32_t value);

    /// <summary>
    /// 知识库召回得分
    /// </summary>

    double getScore() const;
    bool scoreIsSet() const;
    void unsetscore();
    void setScore(double value);


protected:
    std::string name_;
    bool nameIsSet_;
    int32_t topk_;
    bool topkIsSet_;
    double score_;
    bool scoreIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UpdateKnowledgeLibraryReq_H_
