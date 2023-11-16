
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_QueryTemplatesResult_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_QueryTemplatesResult_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsbuild/v3/model/QueryTemplatesItems.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  QueryTemplatesResult
    : public ModelBase
{
public:
    QueryTemplatesResult();
    virtual ~QueryTemplatesResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryTemplatesResult members

    /// <summary>
    /// 返回模板数量
    /// </summary>

    int32_t getTotalSize() const;
    bool totalSizeIsSet() const;
    void unsettotalSize();
    void setTotalSize(int32_t value);

    /// <summary>
    /// 模板信息列表
    /// </summary>

    std::vector<QueryTemplatesItems>& getItems();
    bool itemsIsSet() const;
    void unsetitems();
    void setItems(const std::vector<QueryTemplatesItems>& value);


protected:
    int32_t totalSize_;
    bool totalSizeIsSet_;
    std::vector<QueryTemplatesItems> items_;
    bool itemsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_QueryTemplatesResult_H_
