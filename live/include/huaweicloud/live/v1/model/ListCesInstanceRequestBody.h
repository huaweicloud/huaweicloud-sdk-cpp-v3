
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListCesInstanceRequestBody_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListCesInstanceRequestBody_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/live/v1/model/ListCesInstanceRequestBody_query.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 查询medialive维度(medialive_mpc、medialive_cdn、medialive_package、medialive_connect、medialive_tailor) medialive_mpc维度可以查询实例下的pipeline实例及pipeline下的音频实例
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  ListCesInstanceRequestBody
    : public ModelBase
{
public:
    ListCesInstanceRequestBody();
    virtual ~ListCesInstanceRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListCesInstanceRequestBody members

    /// <summary>
    /// 命名空间
    /// </summary>

    std::string getNamespace() const;
    bool namespaceIsSet() const;
    void unsetnamespace();
    void setNamespace(const std::string& value);

    /// <summary>
    /// 查询信息
    /// </summary>

    std::vector<ListCesInstanceRequestBody_query>& getQuery();
    bool queryIsSet() const;
    void unsetquery();
    void setQuery(const std::vector<ListCesInstanceRequestBody_query>& value);

    /// <summary>
    /// 查询开始偏移
    /// </summary>

    int32_t getStart() const;
    bool startIsSet() const;
    void unsetstart();
    void setStart(int32_t value);

    /// <summary>
    /// 查询限制
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);


protected:
    std::string namespace_;
    bool namespaceIsSet_;
    std::vector<ListCesInstanceRequestBody_query> query_;
    bool queryIsSet_;
    int32_t start_;
    bool startIsSet_;
    int32_t limit_;
    bool limitIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListCesInstanceRequestBody_H_
