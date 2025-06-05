
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ListRecords_result_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ListRecords_result_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsbuild/v3/model/ListRecords_result_pagination.h>
#include <huaweicloud/codeartsbuild/v3/model/BuildRecord.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 项目列表
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  ListRecords_result
    : public ModelBase
{
public:
    ListRecords_result();
    virtual ~ListRecords_result();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListRecords_result members

    /// <summary>
    /// 
    /// </summary>

    ListRecords_result_pagination getPagination() const;
    bool paginationIsSet() const;
    void unsetpagination();
    void setPagination(const ListRecords_result_pagination& value);

    /// <summary>
    /// 工程构建记录列表
    /// </summary>

    std::vector<BuildRecord>& getData();
    bool dataIsSet() const;
    void unsetdata();
    void setData(const std::vector<BuildRecord>& value);


protected:
    ListRecords_result_pagination pagination_;
    bool paginationIsSet_;
    std::vector<BuildRecord> data_;
    bool dataIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ListRecords_result_H_
