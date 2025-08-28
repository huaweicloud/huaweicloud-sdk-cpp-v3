
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateInstructionLibraryReq_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateInstructionLibraryReq_H_


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
/// 创建指令集请求。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  CreateInstructionLibraryReq
    : public ModelBase
{
public:
    CreateInstructionLibraryReq();
    virtual ~CreateInstructionLibraryReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateInstructionLibraryReq members

    /// <summary>
    /// 指令集名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateInstructionLibraryReq_H_
