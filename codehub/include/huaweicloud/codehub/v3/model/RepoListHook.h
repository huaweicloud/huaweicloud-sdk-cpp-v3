
#ifndef HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_RepoListHook_H_
#define HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_RepoListHook_H_


#include <huaweicloud/codehub/v3/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codehub/v3/model/RepoHook.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEHUB_V3_EXPORT  RepoListHook
    : public ModelBase
{
public:
    RepoListHook();
    virtual ~RepoListHook();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RepoListHook members

    /// <summary>
    /// hook列表
    /// </summary>

    std::vector<RepoHook>& getHooks();
    bool hooksIsSet() const;
    void unsethooks();
    void setHooks(const std::vector<RepoHook>& value);


protected:
    std::vector<RepoHook> hooks_;
    bool hooksIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_RepoListHook_H_
