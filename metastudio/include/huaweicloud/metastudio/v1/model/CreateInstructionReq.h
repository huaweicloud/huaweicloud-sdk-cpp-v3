
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateInstructionReq_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateInstructionReq_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/InstructionReplyWordsInfo.h>
#include <string>
#include <huaweicloud/metastudio/v1/model/InstructionSlotInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建指令请求。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  CreateInstructionReq
    : public ModelBase
{
public:
    CreateInstructionReq();
    virtual ~CreateInstructionReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateInstructionReq members

    /// <summary>
    /// 指令名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 指令描述。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 操作指令。
    /// </summary>

    std::string getInstruction() const;
    bool instructionIsSet() const;
    void unsetinstruction();
    void setInstruction(const std::string& value);

    /// <summary>
    /// 指令集ID。
    /// </summary>

    std::string getInstructionLibraryId() const;
    bool instructionLibraryIdIsSet() const;
    void unsetinstructionLibraryId();
    void setInstructionLibraryId(const std::string& value);

    /// <summary>
    /// 槽位列表
    /// </summary>

    std::vector<InstructionSlotInfo>& getSlotList();
    bool slotListIsSet() const;
    void unsetslotList();
    void setSlotList(const std::vector<InstructionSlotInfo>& value);

    /// <summary>
    /// 指令回复话术列表
    /// </summary>

    std::vector<InstructionReplyWordsInfo>& getReplyWordsList();
    bool replyWordsListIsSet() const;
    void unsetreplyWordsList();
    void setReplyWordsList(const std::vector<InstructionReplyWordsInfo>& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string instruction_;
    bool instructionIsSet_;
    std::string instructionLibraryId_;
    bool instructionLibraryIdIsSet_;
    std::vector<InstructionSlotInfo> slotList_;
    bool slotListIsSet_;
    std::vector<InstructionReplyWordsInfo> replyWordsList_;
    bool replyWordsListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateInstructionReq_H_
