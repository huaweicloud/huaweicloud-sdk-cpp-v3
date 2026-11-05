
#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_QueryAppLogResult_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_QueryAppLogResult_H_


#include <huaweicloud/codeartsdeploy/v2/CodeArtsDeployExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 部署记录执行日志结果
/// </summary>
class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT  QueryAppLogResult
    : public ModelBase
{
public:
    QueryAppLogResult();
    virtual ~QueryAppLogResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryAppLogResult members

    /// <summary>
    /// 是否有更多日志信息
    /// </summary>

    bool isHasMore() const;
    bool hasMoreIsSet() const;
    void unsethasMore();
    void setHasMore(bool value);

    /// <summary>
    /// 日志信息
    /// </summary>

    std::string getText() const;
    bool textIsSet() const;
    void unsettext();
    void setText(const std::string& value);

    /// <summary>
    /// 日志起始偏移量
    /// </summary>

    std::string getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(const std::string& value);

    /// <summary>
    /// 日志末位偏移量，与offset参数配合使用
    /// </summary>

    std::string getEndOffset() const;
    bool endOffsetIsSet() const;
    void unsetendOffset();
    void setEndOffset(const std::string& value);


protected:
    bool hasMore_;
    bool hasMoreIsSet_;
    std::string text_;
    bool textIsSet_;
    std::string offset_;
    bool offsetIsSet_;
    std::string endOffset_;
    bool endOffsetIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_QueryAppLogResult_H_
