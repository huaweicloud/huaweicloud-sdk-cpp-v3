
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_InstructionSlotInfo_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_InstructionSlotInfo_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/metastudio/v1/model/SlotKnowledgeLibraryInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 指令槽位信息。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  InstructionSlotInfo
    : public ModelBase
{
public:
    InstructionSlotInfo();
    virtual ~InstructionSlotInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// InstructionSlotInfo members

    /// <summary>
    /// 槽位名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 槽位描述。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 知识库列表
    /// </summary>

    std::vector<SlotKnowledgeLibraryInfo>& getKnowledgeLibraryList();
    bool knowledgeLibraryListIsSet() const;
    void unsetknowledgeLibraryList();
    void setKnowledgeLibraryList(const std::vector<SlotKnowledgeLibraryInfo>& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::vector<SlotKnowledgeLibraryInfo> knowledgeLibraryList_;
    bool knowledgeLibraryListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_InstructionSlotInfo_H_
