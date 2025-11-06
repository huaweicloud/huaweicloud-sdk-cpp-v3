
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_ListSshKeysRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_ListSshKeysRequest_H_


#include <huaweicloud/codeartsrepo/v3/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V3_EXPORT  ListSshKeysRequest
    : public ModelBase
{
public:
    ListSshKeysRequest();
    virtual ~ListSshKeysRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListSshKeysRequest members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListSshKeysRequest& dereference_from_shared_ptr(std::shared_ptr<ListSshKeysRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_ListSshKeysRequest_H_
