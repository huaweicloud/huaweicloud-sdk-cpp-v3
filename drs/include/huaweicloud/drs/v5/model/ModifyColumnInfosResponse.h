
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ModifyColumnInfosResponse_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ModifyColumnInfosResponse_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ModifyColumnInfosResponse
    : public ModelBase, public HttpResponse
{
public:
    ModifyColumnInfosResponse();
    virtual ~ModifyColumnInfosResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ModifyColumnInfosResponse members

    /// <summary>
    /// 修改结果
    /// </summary>

    bool isModifyResult() const;
    bool modifyResultIsSet() const;
    void unsetmodifyResult();
    void setModifyResult(bool value);


protected:
    bool modifyResult_;
    bool modifyResultIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ModifyColumnInfosResponse_H_
