
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_RoleKnowledgeLibraryReq_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_RoleKnowledgeLibraryReq_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/KnowledgeTypeEnum.h>
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
/// 角色知识库配置请求信息。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  RoleKnowledgeLibraryReq
    : public ModelBase
{
public:
    RoleKnowledgeLibraryReq();
    virtual ~RoleKnowledgeLibraryReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RoleKnowledgeLibraryReq members

    /// <summary>
    /// 
    /// </summary>

    KnowledgeTypeEnum getKnowledgeType() const;
    bool knowledgeTypeIsSet() const;
    void unsetknowledgeType();
    void setKnowledgeType(const KnowledgeTypeEnum& value);

    /// <summary>
    /// 知识库ID列表
    /// </summary>

    std::vector<std::string>& getKnowledgeLibraryIdList();
    bool knowledgeLibraryIdListIsSet() const;
    void unsetknowledgeLibraryIdList();
    void setKnowledgeLibraryIdList(const std::vector<std::string>& value);


protected:
    KnowledgeTypeEnum knowledgeType_;
    bool knowledgeTypeIsSet_;
    std::vector<std::string> knowledgeLibraryIdList_;
    bool knowledgeLibraryIdListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_RoleKnowledgeLibraryReq_H_
