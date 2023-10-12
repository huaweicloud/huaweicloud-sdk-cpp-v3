
#ifndef HUAWEICLOUD_SDK_TMS_V1_MODEL_ModifyPrefineTag_H_
#define HUAWEICLOUD_SDK_TMS_V1_MODEL_ModifyPrefineTag_H_


#include <huaweicloud/tms/v1/TmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/tms/v1/model/PredefineTagRequest.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 修改预定义标签
/// </summary>
class HUAWEICLOUD_TMS_V1_EXPORT  ModifyPrefineTag
    : public ModelBase
{
public:
    ModifyPrefineTag();
    virtual ~ModifyPrefineTag();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ModifyPrefineTag members

    /// <summary>
    /// 
    /// </summary>

    PredefineTagRequest getNewTag() const;
    bool newTagIsSet() const;
    void unsetnewTag();
    void setNewTag(const PredefineTagRequest& value);

    /// <summary>
    /// 
    /// </summary>

    PredefineTagRequest getOldTag() const;
    bool oldTagIsSet() const;
    void unsetoldTag();
    void setOldTag(const PredefineTagRequest& value);


protected:
    PredefineTagRequest newTag_;
    bool newTagIsSet_;
    PredefineTagRequest oldTag_;
    bool oldTagIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_TMS_V1_MODEL_ModifyPrefineTag_H_
