
#ifndef HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_StandardResponse_result_H_
#define HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_StandardResponse_result_H_


#include <huaweicloud/codeartsartifact/v2/CodeArtsArtifactExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsartifact/v2/model/ReleaseFileVersionDo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 返回的具体结果信息
/// </summary>
class HUAWEICLOUD_CODEARTSARTIFACT_V2_EXPORT  StandardResponse_result
    : public ModelBase
{
public:
    StandardResponse_result();
    virtual ~StandardResponse_result();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StandardResponse_result members

    /// <summary>
    /// 符合条件的结果列表
    /// </summary>

    std::vector<ReleaseFileVersionDo>& getData();
    bool dataIsSet() const;
    void unsetdata();
    void setData(const std::vector<ReleaseFileVersionDo>& value);

    /// <summary>
    /// 符合条件的结果总数
    /// </summary>

    int32_t getTotalRecords() const;
    bool totalRecordsIsSet() const;
    void unsettotalRecords();
    void setTotalRecords(int32_t value);

    /// <summary>
    /// 符合条件的结果总页数
    /// </summary>

    int32_t getTotalPages() const;
    bool totalPagesIsSet() const;
    void unsettotalPages();
    void setTotalPages(int32_t value);


protected:
    std::vector<ReleaseFileVersionDo> data_;
    bool dataIsSet_;
    int32_t totalRecords_;
    bool totalRecordsIsSet_;
    int32_t totalPages_;
    bool totalPagesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_StandardResponse_result_H_
