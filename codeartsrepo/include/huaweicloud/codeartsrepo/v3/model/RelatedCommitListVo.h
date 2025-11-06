
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_RelatedCommitListVo_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_RelatedCommitListVo_H_


#include <huaweicloud/codeartsrepo/v3/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsrepo/v3/model/RelatedCommitVo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V3_EXPORT  RelatedCommitListVo
    : public ModelBase
{
public:
    RelatedCommitListVo();
    virtual ~RelatedCommitListVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RelatedCommitListVo members

    /// <summary>
    /// 
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<RelatedCommitVo>& getList();
    bool listIsSet() const;
    void unsetlist();
    void setList(const std::vector<RelatedCommitVo>& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    std::vector<RelatedCommitVo> list_;
    bool listIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_RelatedCommitListVo_H_
