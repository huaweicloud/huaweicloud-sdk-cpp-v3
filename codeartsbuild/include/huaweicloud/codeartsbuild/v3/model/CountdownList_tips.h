
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_CountdownList_tips_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_CountdownList_tips_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsbuild/v3/model/Tips.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 咨询
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  CountdownList_tips
    : public ModelBase
{
public:
    CountdownList_tips();
    virtual ~CountdownList_tips();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CountdownList_tips members

    /// <summary>
    /// 
    /// </summary>

    Tips getSummary() const;
    bool summaryIsSet() const;
    void unsetsummary();
    void setSummary(const Tips& value);


protected:
    Tips summary_;
    bool summaryIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_CountdownList_tips_H_
